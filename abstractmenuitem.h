#ifndef ABSTRACTMENUITEM_H
#define ABSTRACTMENUITEM_H

#include <string>

/*!
 * \brief The AbstractMenuItem class is the base class for items containing in the menu.
 */

class Visitor;

class AbstractMenuItem
{
public:
    AbstractMenuItem(const std::string &title);

    std::string title() const;

    virtual void apply(Visitor *visitor) = 0;

private:
    std::string mTitle;
};

#endif // ABSTRACTMENUITEM_H
