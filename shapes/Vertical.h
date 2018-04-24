#pragma once

#include "ComboShape.h"
#include <vector>
#include <memory>

class Vertical : public ComboShape
{
public:
  Vertical(std::vector<std::unique_ptr<Shape>> &);
  virtual std::string printCombo() const override;
  virtual double width() const override;
  virtual double height() const override;
private:
  std::vector<std::unique_ptr<Shape>> _shapes;
};
