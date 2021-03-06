#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::for_each(people.begin(),people.end(),[](Human& person){person.birthday();});
    std::transform(people.rbegin(),people.rend(),ret_v.begin(),[](Human& person){return person.isMonster()? 'n':'y';});
    return ret_v;
}
