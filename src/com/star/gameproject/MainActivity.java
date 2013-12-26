package com.star.gameproject;

import android.os.Bundle;
import android.app.Activity;
import android.content.res.Configuration;
import android.util.Log;
import android.view.Menu;
import android.view.Surface;
import android.view.SurfaceHolder;

public class MainActivity extends Activity {

	//                 Activity Launched
	//                         |
	//	      -----------> onCreate()
	//		 |				   |
	//		 |			   onStart() <--------- onRestart()
	//		 | 				   |				     T
	// user navigates	  onResume() <------		 |
	// to the activity		   |			|		 |
	//		 | 				   |	   user returns  |
	//   App process	    Activity   to activity   |
	//	 killed			    running			|		 |
	//		 T				   |			| 		 |
	//		 |		Another acitivity comes |		 |
	//		 |	 	into the foreground   	|		 |
	//		 |				   |		    |		 |
	//	Apps with higher <- onPause() ------	 	 |		
	//  priority needs		   |			  User navigates
	//  memory			This activity is	  to the activity
	//		 |			no longer visible 			 |
	//		 |				   |			         |
	//		  ------------- onStop() ----------------
	//						   |
	//			   The activity is finished or
	//			   being destroyed by the system
	//						   |
	//					   onDestroy()
	//						   |
	//					Activity shut down
	
	@Override
	public void onAttachedToWindow()
	{
		super.onAttachedToWindow();
	}
	
	// Beginning of the entire lifetime.
	// Called when the activity is first created.
	// Always followed by onStart().
	@Override
	protected void onCreate(
		Bundle savedInstanceState
		)
	{
		super.onCreate(savedInstanceState);
		// etContentView(R.layout.activity_main);
	}
	
	// Called after your activity has been stopped,
	// prior to it being started again. Always followed by onStart()
	@Override
    protected void onRestart()
 	{
        super.onRestart();
    }
	
	// Called by the system when the device configuration
	// changes while your activity is running.
	@Override
	public void onConfigurationChanged(
		Configuration newConfig
		)
	{
		super.onConfigurationChanged(newConfig);
	}
	
	// Start of the visible lifetime.
	// Called when the activity is becoming visible to the user.
	// Followed by onResume() if the activity comes to the foreground,
	// or onStop() if it becomes hidden.
	@Override
    protected void onStart()
 	{
        super.onStart();
    }

	// Start of the foreground lifetime.
	// Called when the activity will start interacting with the user.
	// At this point your activity is at the top of the activity stack,
	// with user input going to it. Always followed by onPause().
    @Override
    protected void onResume()
    {
        super.onResume();
    }
    
    // Ending of the foreground lifetime.
    // Called when the system is about to start resuming
    // a previous activity. This is typically used to commit
    // unsaved changes to persistent data, stop animations and
    // other things that may be consuming CPU, etc.
    // Implementations of this method must be very quick because
    // the next activity will not be resumed until this method returns.
    // Followed by either onResume() if the activity returns
    // back to the front, or onStop() if it becomes invisible to the user.
    @Override
    protected void onPause()
    {
        super.onPause();
    }

    // Ending of the visible lifetime.
    // Called when the activity is no longer visible to the user,
    // because another activity has been resumed and is covering this one.
    // This may happen either because a new activity is being started,
    // an existing one is being brought in front of this one,
    // or this one is being destroyed.Followed by either onRestart()
    // if this activity is coming back to interact with the user,
    // or onDestroy() if this activity is going away.
    @Override
    protected void onStop()
    {
        super.onStop();
    }
    
    // Ending of the entire lifetime.
    // The final call you receive before your activity is destroyed.
    // This can happen either because the activity is finishing
    // (someone called finish() on it, or because the system
    // is temporarily destroying this instance of the activity
    // to save space. You can distinguish between these two scenarios
    // with the isFinishing() method.
    @Override
    protected void onDestroy()
    {
    	super.onDestroy();
    }

    public void surfaceChanged(
		SurfaceHolder holder,
		int format,
		int width,
		int height
		)
    {
    }

    public void surfaceCreated(
		SurfaceHolder holder
		)
    {
    }

    public void surfaceDestroyed(
		SurfaceHolder holder
		)
    {
    }
    
    // native function declerations
    
    static {
        // System.loadLibrary("starengine");
        // System.loadLibrary("gameproject");
    }
}
