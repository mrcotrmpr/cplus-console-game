#ifndef CPLUS_IN_TOWN_STATE_HPP
#define CPLUS_IN_TOWN_STATE_HPP

#include "memory"
#include "state.hpp"

class InTownState : public State
{
public:
    void handle(std::shared_ptr<Game> game, std::shared_ptr<Printer> printer, int input) override;
};

#endif //CPLUS_IN_TOWN_STATE_HPP
