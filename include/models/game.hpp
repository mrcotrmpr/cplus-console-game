#ifndef CPLUS_TESTS_GAME_HPP
#define CPLUS_TESTS_GAME_HPP

#include "string"
#include "memory"

class State;
class Printer;
class Town;
class Wagon;
class Database;
class Randomizer;

class Game : public std::enable_shared_from_this<Game>
{
public:
    Game();
    void start();
    void stop();
    void handle(int input);
    [[nodiscard]] bool is_running() const;
    void set_state(std::shared_ptr<State> state);
    [[nodiscard]] std::shared_ptr<State> get_state() const;
    [[nodiscard]] std::shared_ptr<Printer> get_printer() const;
    [[nodiscard]] std::shared_ptr<Town> get_current_town() const;
    [[nodiscard]] std::shared_ptr<Wagon> get_player() const;
private:
    void _init();
    std::shared_ptr<State> _state;
    std::shared_ptr<Printer> _printer;
    std::shared_ptr<Town> _current_town;
    std::shared_ptr<Wagon> _player;
    std::shared_ptr<Database> _db;
    std::shared_ptr<Randomizer> _random;
    bool _running{};
};

#endif //CPLUS_TESTS_GAME_HPP
