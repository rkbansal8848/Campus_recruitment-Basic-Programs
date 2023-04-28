package com.example.videoconferencing;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.app.ProgressDialog;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.OnSuccessListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.auth.AuthResult;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.firestore.FirebaseFirestore;

public class signup_activity extends AppCompatActivity {

    FirebaseAuth auth;
    FirebaseFirestore database;

    EditText name2,mail2,pass2;
    Button create2,sign22;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_signup);

        name2=findViewById(R.id.name2);
        mail2=findViewById(R.id.mail2);
        pass2=findViewById(R.id.pass2);

        create2=findViewById(R.id.create2);
        sign22=findViewById(R.id.sign22);

        auth=FirebaseAuth.getInstance();
        database=FirebaseFirestore.getInstance();

        ProgressDialog progress=new ProgressDialog((signup_activity.this));
        progress.setTitle("Creating Credentials");
        progress.setMessage("Please wait while we are creating your account");

        create2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                try {
                    progress.show();
                    String email, pass, name;
                    name = name2.getText().toString();
                    email = mail2.getText().toString();
                    pass = pass2.getText().toString();

                    User user =new User();
                    user.setName(name);
                    user.setEmail(email);
                    user.setPassword(pass);

                    auth.createUserWithEmailAndPassword(email, pass).addOnCompleteListener(new OnCompleteListener<AuthResult>() {
                        @Override
                        public void onComplete(@NonNull Task<AuthResult> task) {
                            progress.dismiss();
                            if (task.isSuccessful()) {

                                database.collection("Users").document().set(user).addOnSuccessListener(new OnSuccessListener<Void>() {
                                    @Override
                                    public void onSuccess(Void unused) {
                                        startActivity(new Intent(signup_activity.this,login_activity.class));
                                    }
                                });

                                Toast.makeText(signup_activity.this, "Account is Created", Toast.LENGTH_SHORT).show();
                            } else {
                                Toast.makeText(signup_activity.this, task.getException().getLocalizedMessage(), Toast.LENGTH_SHORT).show();
                            }
                        }
                    });
                } catch (Exception e) {
                    Toast.makeText(signup_activity.this, "Please enter the details", Toast.LENGTH_SHORT).show();
                    e.printStackTrace();
                }


            }
        });




        sign22.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(signup_activity.this,login_activity.class));
            }
        });

    }
}