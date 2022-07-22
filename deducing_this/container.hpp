#pragma once

#include <vector>

template <typename T>
class Container
{
    public:
    Container(): m_storage() {}

    void resize(size_t size) {
        m_storage.resize(size);
    }

    auto&& at(this auto&& self, int index) {
        return self.m_storage[index];
    }

    private:
    std::vector<T> m_storage;
};
