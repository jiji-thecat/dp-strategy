# Design Pattern - Strategy pattern

## Description

![strategy](https://github.com/jiji-thecat/dp-strategy/assets/104809324/723ad9ad-9178-4ce4-a254-ca339d495dbb)

Strategy pattern is a pattern that will enhance the readibility of the programming code and maintanancity with decuppling the algorithm to another class rather than write them all in one function.

### Class diagram

![class diagram](https://github.com/jiji-thecat/dp-strategy/assets/104809324/02317852-e384-4ea1-b569-5a1f3352c06e)
[wiki](https://ja.wikipedia.org/wiki/Strategy_%E3%83%91%E3%82%BF%E3%83%BC%E3%83%B3)

If you inherit algorithm interface on `ConcreteStrategy` class, then you will be able to reorder the algorithm easily and apperance will look nice.

## How to Install and Run

Import this project as a QT project.

## How to Use This App

![strategy](https://github.com/jiji-thecat/dp-strategy/assets/104809324/723ad9ad-9178-4ce4-a254-ca339d495dbb)

This app will compare 2 bowls of beaf and rice. Each button will compare meat, onion and pickles. The bowl which has more ingredents will be displayed. When they are equal, both bowls will be displayed. The algorithm to compare is made by using Strategy pattern.

## License

**MIT License**

Copyright © 2024 jiji

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation, the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

\*\*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
