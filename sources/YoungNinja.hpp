#pragma once
#ifndef YOUNGNINJA_HPP
#define TOUNGNINJA_HPP

#include "Ninja.hpp"
namespace ariel{
    class YoungNinja : public Ninja {
        public:
            YoungNinja(const std::string& name, const Point& location);

    };
}
#endif