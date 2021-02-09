#include "Tile.h"

#include "Config.h"
#include "TextureManager.h"
#include "Util.h"

Tile::Tile()
{
	setWidth(Config::TILE_SIZE);
	setHeight(Config::TILE_SIZE);
	setTileCost(0.0f);
}

Tile::~Tile()
= default;

void Tile::draw()
{
	Util::DrawRect(getTransform()->position, getWidth(), getHeight());
}

void Tile::update()
{
}

void Tile::clean()
{
}

Tile* Tile::getNeightbourTile(const NeighbourTile position)
{
	return m_neighbours[position];
}

void Tile::setNeighbourTile(const NeighbourTile position, Tile* tile)
{
	m_neighbours[position] = tile;
}

float Tile::getTileCost() const
{
	return m_cost;
}

void Tile::setTileCost(const float cost)
{
	m_cost = cost;

	//To Do: display cost in label
}
