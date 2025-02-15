#pragma once

#include "unit.h"
#include "stats.h"

#include <vector>

namespace action
{
struct Action;
}

namespace unit
{

constexpr int MIRROR_IMAGE = 31216;

class MirrorImage : public Unit
{
public:

    MirrorImage(const Config& config, const Stats& stats);

    std::vector<action::Action> onCastSuccessProc(const State& state, std::shared_ptr<spell::Spell> spell);

    action::Action nextAction(const State& state);
};

}