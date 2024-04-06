
# Cub3D @ 42

## Overview

Cub3D is a 42 Network project aimed at introducing the fundamentals of graphic computing and, more specifically, the technique known as ray-casting. The project is inspired by the classic game Wolfenstein 3D, which is considered to be the first true first-person shooter. The goal is to create a "realistic" 3D graphical representation of the inside of a maze from a first-person perspective, using the Ray-Casting principles.

## Objectives

- Understand the basics of graphic computing.
- Familiarize with the Ray-Casting technique.
- Apply mathematical concepts in a practical project.
- Develop a program using the miniLibX, 42's minimalist graphics library.

## Features

- Wall collision detection.
- Dynamic view inside the maze.
- Wall textures (and sprite handling as an extension).
- Orientation and ability to move around the maze (forward, backward, left, right).
- Floor and ceiling texture (as an extension).

## Installation

```bash
git clone https://github.com/turman17/Cub3d.git Cub3D
cd Cub3Dbash
git clone https://github.com/turman17/Cub3d.git Cub3D
cd Cub3D
make
```

To run the game, execute:

\`\`\`bash
./cub3D maps/map1.cub
\`\`\`

## Map Configuration

The map configuration file is a \`.cub\` file that defines the environment in which the game will run. It includes:

- Map layout with \`1\` representing walls and \`0\` representing free spaces.
- The player's starting position and orientation indicated by \`N\`, \`S\`, \`E\`, or \`W\`.
- Paths to texture files for walls, floor, and ceiling.

## Controls

- **W/A/S/D** to move forward/left/backward/right.
- **Left/Right Arrow** to rotate the viewpoint.
- **ESC** to exit the game.

## Contributor

@dlbltv

## Acknowledgments

This project is inspired by the historic Wolfenstein 3D game and aims at learning the basics of ray-casting. Special thanks to the 42 community and its staff for the support and guidance.
