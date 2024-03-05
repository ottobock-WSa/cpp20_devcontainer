#include <iostream>
#include <string>
#include <functional>

class Command {
    public:
        virtual void Execute();
};

class SimpleCommand:public Command
{
    private:
        std::string _param;
        std::function<void(std::string)> _receiver;

    public:

        SimpleCommand( std::function<void(std::string)> receiver, std::string param): _receiver(receiver),  _param(param) {
                   }

        virtual void Execute() override{
            _receiver(_param);
        }

};



class CommandInvoker
{
    public:

        virtual void Execute( Command& cmd )
        {
            std::cout << "CommandInvoker::Execute(Command&)" << std::endl;
            cmd.Execute();
        }
        virtual void Execute( const Command& cmd )
        {
            std::cout << "CommandInvoker::Execute(Command&)" << std::endl;
            //cmd.Execute();
        }
        virtual void Execute( Command&& cmd )
        {
            std::cout << "CommandInvoker::Execute(Command&)" << std::endl;
            cmd.Execute();
        }
};

class TestCommandInvoker:CommandInvoker
{
    public:

        template<typename T>
        void Execute(T&& cmd) {
            std::cout << "CommandInvoker::Execute(Command&)" << std::endl;
            CommandInvoker::Execute(std::forward<T>(cmd));
        }
};