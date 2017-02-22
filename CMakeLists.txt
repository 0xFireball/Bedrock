cmake_minimum_required(VERSION 3.5)
project(Bedrock)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})
include_directories(${OPENGL_INCLUDE_DIRS})

set(SOURCE_FILES
        Air.h
        Bear.cpp
        Bear.h
        bear_png.h
        Block.cpp
        Block.h
        blocks_png.h
        Button.cpp
        Button.h
        Chunk.cpp
        Chunk.h
        Chunk_draw.cpp
        Clay.h
        Command.h
        Dirt.cpp
        Dirt.h
        DisplayList.cpp
        DisplayList.h
        drawingUtil.cpp
        drawingUtil.h
        DroppedItem.cpp
        DroppedItem.h
        Entity.cpp
        Entity.h
        FlowerGrass.cpp
        FlowerGrass.h
        fog.cpp
        font_png.h
        frustum.cpp
        frustum.h
        globals.cpp
        globals.h
        GraphicView.h
        Grass.h
        hud.cpp
        hud.h
        HUDElement.h
        input.cpp
        input.h
        Item.cpp
        Item.h
        Leaves.h
        LivingEntity.cpp
        LivingEntity.h
        main.cpp
        main_init.cpp
        math.h
        Menu.cpp
        Menu.h
        MenuButton.cpp
        MenuButton.h
        menus_png.h
        MineCommand.cpp
        MineCommand.h
        MountainGrass.h
        MoveCommand.cpp
        MoveCommand.h
        NoiseGrid.cpp
        NoiseGrid.h
        OcclusionChunk.cpp
        OcclusionChunk.h
        OpenGL.h
        ortho.cpp
        ortho.h
        Particle.cpp
        Particle.h
        PerlinNoise.cpp
        PerlinNoise.h
        Player.cpp
        Player.h
        Quadruped.cpp
        Quadruped.h
        Rock.cpp
        Rock.h
        rock_png.h
        RockyClay.h
        RockyDirt.cpp
        RockyDirt.h
        ShaderProgram.cpp
        ShaderProgram.h
        shaders.cpp
        shaders.h
        Stone.h
        TallGrass.h
        textures.cpp
        textures.h
        TileEntity.cpp
        TileEntity.h
        Unit.cpp
        Unit.h
        unit_png.h
        util.cpp
        util.h
        Water.h
        Wood.h
        World.cpp
        World.h
        worldGen.cpp
        worldGen.h)


add_executable(Bedrock ${SOURCE_FILES})
target_link_libraries(Bedrock ${SDL2_LIBRARY} ${OPENGL_LIBRARIES})
# link to SOIL
target_link_libraries(Bedrock ${CMAKE_SOURCE_DIR}/soil/libsoil.a)
