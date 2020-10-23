#pragma once

#include <functional>
/*
#include <list>
#include <memory>
#include <functional>

#include "IEventHandler.hpp"
#include "SnakeInterface.hpp"
*/

namespace Map
{
    class MapValues
    {
    public:
        MapValues() = default;
        ~MapValues() = default;
        std::pair<int, int> getMapDimensions()
        {
            return m_mapDimension;
        }
        void setMapDimensions(std::pair<int, int> dimensions)
        {
            m_mapDimension = dimensions;
        }
    private:
        std::pair<int, int> m_mapDimension;
    };
}