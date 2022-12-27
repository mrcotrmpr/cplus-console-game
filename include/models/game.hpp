#ifndef CPLUS_TESTS_GAME_HPP
#define CPLUS_TESTS_GAME_HPP

#include "string"
#include "memory"

class State;
class Printer;

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
private:
    std::shared_ptr<State> _state;
    std::shared_ptr<Printer> _printer;
    bool _running{};
};

#endif //CPLUS_TESTS_GAME_HPP