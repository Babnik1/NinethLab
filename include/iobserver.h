#pragma once

/// @file iobserver.h
///
/// @brief Абстрактный наблюдатель.
///

#include <ctime>
#include <string>
#include <vector>
#include <memory>

/// @brief Класс абстрактоного наблюдателя.
class IObserver 
{
public:
    virtual ~IObserver() = default;

    /// @brief Вывусти завершённый пакет команд в консоль.
    /// @param[in] commands Строка с командами.
    /// @param[in] timestamp Временная точка регистрации первой команды.
    virtual void onBlock( std::shared_ptr<const std::vector<std::string>> commands, std::time_t timestamp ) = 0;
};
