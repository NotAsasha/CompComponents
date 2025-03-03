#pragma once
class Component {
public:
    virtual void display() const = 0;
    virtual ~Component() = default; 
};