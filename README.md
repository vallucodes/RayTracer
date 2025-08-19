# miniRT

## 📌 Overview

MiniRT is a simple raytracing engine that renders 3D scenes with basic shapes, lighting and camera control.

## 🌟 Features

- **Objects supported**: Sphere, plane, cylinder
- **Transformation**: Objects can translated, rotated and scaled
- **Ambient light**: Color and brightness
- **Light**: Position and brightness
- **Camera**: Position, direction and field of view

## ▶️ Run

### Compilation
```bash
git clone https://github.com/vallucodes/miniRT.git
cd miniRT
make
```
### Run
```bash
./miniRT scenes/room.rt
```

## ⏩ Scene file setup

Example scene file found in ./scenes/multi-objects2.rt

### 🔆 Lighting Elements
```bash
A <brightness_ratio> <color>								# Ambient light
L <position> <brightness_ratio>								# Point light
```

### 👁️ Camera Setup
```bash
C <position> <direction> <field_of_view>					# Viewpoint definition
```

### 🎯 Scene Objects
```bash
pl <position> <normal_vector> <color>						# Plane
sp <position> <diameter> <color>							# Sphere
cy <position> <axis_direction> <diameter> <height> <color>	# Cylinder
```

## 🛠️ Technical Implementation

| Component   | Details   |
|-----|----------|
| Parsing | Custom parser for `.rt` input file into meaningful data |
| Library | Use MLX42 library to create the window and render the given image |
| Math | 3D vector and matrix manipulation library |
| Intersections | Keep all the objects in origo, inverse transformation matrix applied to ray. Use math equations to calulate intersections |
| Light model | Object reflection based on Phong illumation model: sum of ambient, diffuse and specular light components |
| Shading computation | Cast ray from hit of the object to lightsource to detect any occlusion |
| Camera | 3D camera placement and directions setup |
