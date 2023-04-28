package com.example.videoconferencing;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import org.jitsi.meet.sdk.JitsiMeet;
import org.jitsi.meet.sdk.JitsiMeetActivity;
import org.jitsi.meet.sdk.JitsiMeetConferenceOptions;

import java.net.MalformedURLException;
import java.net.URL;

public class dashboard extends AppCompatActivity {
    EditText room1;
    Button cbutton,log1,share1;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_dashboard);

        room1=findViewById(R.id.room1);

        cbutton=findViewById(R.id.cbutton);
        log1=findViewById(R.id.log1);
        share1=findViewById(R.id.share1);


        cbutton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                // Somewhere early in your app.
                JitsiMeetConferenceOptions defaultOptions
                        = null;
                try {
                    defaultOptions = new JitsiMeetConferenceOptions.Builder()
                            .setServerURL(new URL("https://meet.jit.si"))
                            // When using JaaS, set the obtained JWT here
                            //.setToken("MyJWT")
                            // Different features flags can be set
                            // .setFeatureFlag("toolbox.enabled", false)
                            // .setFeatureFlag("filmstrip.enabled", false)
                            .setFeatureFlag("welcomepage.enabled", false)
                            .build();
                } catch (MalformedURLException e) {
                    throw new RuntimeException(e);
                }
                JitsiMeet.setDefaultConferenceOptions(defaultOptions);
// ...
// Build options object for joining the conference. The SDK will merge the default
// one we set earlier and this one when joining.
                JitsiMeetConferenceOptions options
                        = new JitsiMeetConferenceOptions.Builder()
                        .setRoom(room1.getText().toString())
                        // Settings for audio and video
                        //.setAudioMuted(true)
                        //.setVideoMuted(true)
                        .build();
// Launch the new activity with the given options. The launch() method takes care
// of creating the required Intent and passing the options.
                JitsiMeetActivity.launch(dashboard.this, options);


            }
        });


        share1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String string=room1.getText().toString();
                Intent intent=new Intent();
                intent.setAction(intent.ACTION_SEND);
                intent.putExtra(Intent.EXTRA_TEXT,string);
                intent.setType("text/plain");
                startActivity(intent);

            }
        });

        log1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(dashboard.this,login_activity.class));
            }
        });


    }
}