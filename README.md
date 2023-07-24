# BOFH: Servers Under Siege

This is a modification of the original game "BOFH: Servers Under Siege".

The game content & code are licensed under the 3-clause BSD license.
The modifications are in the same license.

Original webpage: http://covertbitops.c64.org/

## Setting up a development environment

1. Install SDL and build-essentials
1. Build with `make`
1. `cd release` && `./bofh`

There is a dockerized build environment.
Run `./build.sh` to use it.
*Dockerfile* and *build.sh* also serve as references on build dependencies and steps.

## Releasing

After building, the folder *release* contains everything required for a distributable game.
To be able to run the game,
you need to have the same or newer GLIBC version as was used in the build.
