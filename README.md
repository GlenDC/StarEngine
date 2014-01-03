StarEngine [2D] Game Engine
==========

Crossplatform C++11 2D Game Engine for Windows and Android games

## Developers
* [C�dric Van De Walle (Vanatis)](http://vdwcedric.com/)
* [Glen De Cauwsemaecker (GlenDC)](http://www.glendc.com/)
* [Pieter Vantorre (NuclearCookie)](http://pietervantorre.com/)
* [Simon Vanhauwaert (Syvion)](http://www.simonvanhauwaert.com/)

## Stable (master): In Development 
* As long as this branch is in development you should always use [the develop engine version](https://github.com/GlenDC/StarEngine/commits/develop), as this branch gets updated daily!

## Unstable (develop): v0.1.1
Patch Notes:
* **[19/11/2013] 0.0.1** 
  * Initial version of the engine;
  * From now on we'll record patch notes;
  * The official repository is now also protected and people can start forking and improve the engine;
* **[20/11/2013] 0.0.2**
  * The GLM classes and functions have been embedded in the engine;
    * Math functions can be found in the Helpers/Math.h file;
	* Typedefs have been made for portability reasons and should be available everywhere.
	  * It is recommanded not to use any members of vector and matrices besides the data related members (e.g. x, y, z, w, ...)
  * Code reviews have been applied.
  * Camera Culling has now been implemented and can be used.
  * Components can be enabled/disabled;
  * First version of the colission system, the beginning of the physics part of the engine, has been implemented!
* **[24/11/2013] 0.0.3**
  * Further implementation of OOBB - Circle collision;
  * Improved implementation of the Object and Basescene class
	* Tags, Groups and Names can now be used;
	* More easy and flexible ways to reach objects/childs;
  * (2D) Culling system debugged and improved;
  * Implementation of the UserInterface system:
	* Lots of predefined classes that are easily extendable;
	* Custom cursor defined globally or per scene, interactive with the UISystem;
  * Bugfix for Swipe Gesture + made it customizable;
  * Font colors work (again) and sprites can now be multiplied with a color;
  * StarEngine has now a Quit function that can be used to exit the application;
  * Logger::Log replaces ASSERT from now on;
* **[02/12/2013] 0.0.4**
  * Culling bugfixes are solved;
  * Action System has been implemented. A new and easy way to extend your objects on runtime;
    * Several base classes provided and 2 ready-to-use actions (timed fade and move);
  * Template implementations have been moved to inline files;
  * AudioManager has gotten several new functionalties;
  * Some small bug fixes for sound on Android;
  * The Stopwatch System has been improved and has gotten new functionality;
  * Bug fixes related to the reading of files;
  * As an introduction scene the user can now use both the SlideScene and SplashScreen;
  * A lot of bugfixes related to the text, which is now more accurate and correct;
  * Logs are now logged by default with the [GAME] tag, logs from engine use the [STARENGINE] tag;
  * Bugfix related to the UISlider;
  * GameData Helper class has been added and can be used to quickly load/save game data;
* **[13/12/2013] 0.1.0**
  * Spritebatching has been optimized and depth sorting works;
  * Debug Drawing functionalities work properly and are always on top;
  * Text rendering has been optimized;
  * UISystem has been improved:
    * All constructors are now consistent related to the name of an image;
	* Scaling of buttons now get taken into account for their hitregion check;
  * GarbageSystem for the SceneManager and Object has been debugged and improved;
  * Every entity can now be destroy itself correctly;
  * First comments have been added;
  * Dictionary now also has an equal_range function;
  * SafeDelete has been debugged and now works properly;
  * TiledScene has been implemented and tested succesfully;
  * Culling of UI Objects has been debugged and works properly now;
  * Hotfixes for both colliders and the audiomanager have been applied;
  * Object now has functionality to disable, freeze and set the visibility of all children;
  * UIElement now has the functionality to disable the UI functionality of all children;
  * UISlider has been improved:
    * The slider can now have an offset;
	* The alignment of the slider can be set to satisfy personal preferences;
	* The centerpoint of the slider can be adepted;
	* The range of the slider can now be changed both in the positive and negative direction;
  * First tick timer bug has been resolved;
  * Objects can now be mirrored;
  * Safety for adding of components have been implemented, you can only add 1 graphics component per object;
  * Collision callback now also has the colliding object's pointer as a parameter;
  * Debug drawing of collision components has been improved and increased in functionality;
* **[17/12/2013] 0.1.1**
  * Hotfixes for the CameraComponent, PosTexShader and Cursor input;
  * TiledScene now has build-in functionallity to extend tiles;
  * UIElements can now be rotated correctly (#58);
  * Code has been improved by removing duplicate code and unused header files;
  * UIElements pressed-lock bug has been resolved (#78);
  * UIElements now all have build-in debugDrawing for debugging purposes;
  * CameraComponent now uses world values and has a custom Translate function;
  * TimedScaleAction and DelayedFramesAction have been added to the list of build-in action classes;
  * Hotfix for culling of object has been applied;
  * BaseCamera and CameraComponent have both a ScreenToWorld function;
  * 2D Cross product has been added to the Math library;
  * TextComponent, SpriteComponent and SpriteSheetComponent now have comments;
  * SpritesheetComponent has been renamed to SpriteSheetComponent;
  * UIElement::SetSelectCallback has been renamed to UIElement::SetReleaseCallback;
  * UISlider::SetSelectedCallback has been renamed to UISlider::SetReleasedCallback;
  * XMLFileParser now has the function ReadOrCreate;
  * Helper Read function now all have a safe version with a no crash guarantee;
  
  
## License
The Star 2D Game Engine is licensed under the MIT License.
[Click here for the full license details](https://github.com/GlenDC/StarEngine/blob/master/LICENSE).
