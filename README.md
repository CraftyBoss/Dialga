# Starlight - BDSP Example 

This repo contains a barebones example of a Pokemon Brilliant Diamond/Shining Pearl v1.0.0/v1.1.0 mod written (for the most part) in C++.
It is a fork of [Starlight](https://github.com/shadowninja108/Starlight), an awesome project geared toward mod creation for Splatoon 2.

The mod itself is an evolution randomizer mod used in [PointCrow's](https://youtube.com/PointCrow) video, found here:
[Pokemon Shining Pearl but they randomly evolve every level](https://youtu.be/5v7e4aLH3SA)

This tool is a fork of Brycewithfiveunderscores [Super Mario Odyssey Starlight Example](https://github.com/brycewithfiveunderscores/Starlight-SMO-Example), which has
[Pull Requests](https://github.com/brycewithfiveunderscores/Starlight-SMO-Example/pulls?q=label%3Ainitial-change+sort%3Acreated-asc) that details the changes made necessary to make Starlight work in SMO.

## Prerequisites

- [devkitPro](https://devkitpro.org/) 
- Python 3
- The [Keystone-Engine](https://www.keystone-engine.org/) Python Module

## Building

Build has only been tested on WSL2 running Ubuntu 20.04.1.

Just run:
```
DEVKITPRO={path_to_devkitpro} make
```

On Ubuntu (and other Debian-based systems), devkitPro will be installed to `/opt/devkitpro` by default:

```
DEVKITPRO=/opt/devkitpro/ make
```

## Installing (Atmosphère)

After a successful build, simply transfer the `atmosphere` folder located inside `starlight_patch_(Version Number)` to the root of your switch's SD card.

---

# Starlight (Original README)
An enviroment for linking to Splatoon 2 executable and implementing hooks.

# Contributors
- [3096](https://github.com/3096)
- [khang06](https://github.com/khang06)
- [OatmealDome](https://github.com/OatmealDome)
- [Random0666](https://github.com/random0666)
- [shadowninja108](https://github.com/shadowninja108)
- [shibbo](https://github.com/shibbo) - Repo based on their work on OdysseyReversed
- [Thog](https://github.com/Thog) - Expertise in how rtld is implemented

# Credits
- devkitA64
- libnx - switch build rules
