//
// Created by Sebastian Krämer on 02.12.25.
//

#include "Dialer.h"

#include <iostream>
#include <ostream>

namespace day01 {
    Dialer::Dialer(int initialPosition)
        : position(initialPosition) {
        std::cout << "The dial starts by pointing at " << initialPosition << ".\n";
    }

    void Dialer::rotate(Direction direction, int degrees) {
        if (direction == Direction::Left) {
            position -= degrees;
            std::cout << "The dial is rotated Left";
        }
        if (direction == Direction::Right) {
            std::cout << "The dial is rotated Right";
            position += degrees;
        }
        position = (position + numPositions) % numPositions;
        std::cout << " at " << position << ".\n";
    }

    int Dialer::getPosition() const {
        return position;
    }
} // day01