# OpenGL Engine 2.0
https://github.com/HaydenD100/3dEngine2.0

## Changelog

### 3D Engine 2.0 2024/August/2
My main focus for the next couple weeks is going to be overhauling the lighting and rendering systems. The Engine now supports multiple lights that can be dynamically changed in the scene. I'm looking at other graphical improvements like SSAO or Rendering to a texture allowing post processing as well as working on a material system to make the textures feel more unique.
![screenshot](https://github.com/HaydenD100/3dEngine2.0/blob/Bullet3-physics/github/screenshots/better_lighting.png)


### 3D Engine 2.0 2024/July/26
There is a new branch called bullet physics, this is the new current branch that use the Bullet Physics library. Over the last week I have ported my engine to use this physics library. This allowed me to add better rigidbodies as well as dynamic objects, shown in the screenshot below. There are now multiple Collider shapes including spheres/boxes/capsules and convex mesh's base on the model.

![screenshot](https://github.com/HaydenD100/3dEngine2.0/blob/Bullet3-physics/github/screenshots/bullet_physics.png)


### 3D Engine 2.0 – 2024/July/16
Lots of changes this week, Rendering pipeline had an upgrade with allowing textures to now having a normal map for increased graphics. An Audio system has also been added using FMOD allowing .wav files to be loaded and played with full 3D sound. Guns have been implemented with an ak47 and a pistol, pickup able weapons have also been added. Doors were also added and a system for scripts to be able to see what the player is interacting with was also added. A very basic animation system has also been added using keyframes that record transformations of an object.

![screenshot](https://github.com/HaydenD100/3dEngine2.0/blob/Bullet3-physics/github/screenshots/gunsnmore.png)


### 3D Engine 2.0 – 2024/July/08
Rendering pipeline had a few changes most notably transparent textures and decals were added. Raycasting was also added, the camera casts a ray giving you the intersection point at any AABB in the screenshot below I use this for bullet holes. GameObjects also now have a parent-child hierarchy and there model matrix gets updated correctly. Soon I will have to redo the model system to incorporate Assimp for animations.

![screenshot](https://github.com/HaydenD100/3dEngine2.0/blob/Bullet3-physics/github/screenshots/Decals.png)


### 3D Engine 2.0 – 2024/July/04
This week I have implemented physics, my implementation includes rigidbodies and axis aligned boxes for collision, GameObjects can be used to produce a collider with the same dimensions as the model. A Map editor is also in the works making it easier for me to edit the scenes, you can also save gameobjects in the scene to json files and load them through the Asset Manager. The Player was changed to work with the new physics system and the movement has been changed to add inertia making the movement more "realistic".


### 3D Engine 2.0 – 2024/June/30
This is a full rewrite of my first 3D OpenGL engine, the first engine succumbed to poorly written spaghetti code from when I was first learning OpenGl. This Engine has been more thoroughly thought out and will hopefully allow me to make a simple FPS shooter game. So far the Engine has basic Rendering and Text Rendering, Basic Lighting, Scene Management, Input Management, Asset Management. The next step for the engine is basic Physics and Audio.

![screenshot](https://github.com/HaydenD100/3dEngine2.0/blob/Bullet3-physics/github/screenshots/3Dengine.png)
