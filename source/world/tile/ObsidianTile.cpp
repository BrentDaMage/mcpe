/********************************************************************
	Minecraft: Pocket Edition - Decompilation Project
	Copyright (C) 2023 iProgramInCpp
	
	The following code is licensed under the BSD 1 clause license.
	SPDX-License-Identifier: BSD-1-Clause
 ********************************************************************/

#include "Tile.hpp"
#include "world/level/Level.hpp"

ObsidianTile::ObsidianTile(int a, int b, Material* c) : Tile(a, b, c)
{
}

int ObsidianTile::getResource(int data, Random* random)
{
	return Tile::obsidian->m_ID;
}

int ObsidianTile::getResourceCount(Random* random)
{
	return 1;
}
