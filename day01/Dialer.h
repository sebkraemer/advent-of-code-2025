//
// Created by Sebastian Krämer on 02.12.25.
//

#ifndef ADVENT_OF_CODE_2025_DIALER_H
#define ADVENT_OF_CODE_2025_DIALER_H
#include <cstdlib>
#include <string>

namespace day01 {
    class Dialer {
        public:
        enum class Direction {
            Undef, Left, Right
        };
        explicit Dialer(int initialPosition);
        void rotate(Direction direction, int degrees);
        int getPosition() const;
    private:
        int position;
        const int numPositions = 100;
    };

    static void dialWithString(Dialer& dialer, const std::string& value) {
        // check L/RNN form
        Dialer::Direction direction{Dialer::Direction::Undef};
        if (value[0] == 'L') {
            direction = Dialer::Direction::Left;
        }
        else if (value[0] == 'R') {
            direction = Dialer::Direction::Right;
        }
        else {
            throw std::invalid_argument("need L or R for dialing");
        }
        // atoi doesn't report errors..
        int degrees = std::atoi(value.substr(1).c_str());

        dialer.rotate(direction, degrees);

    }
} // day01

#endif //ADVENT_OF_CODE_2025_DIALER_H