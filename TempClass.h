#pragma once
#include <stdio.h>
#include <iostream>

template<typename Type, typename Type2>

class TempClass {
public:
	//コンストラクタ（メンバ変数Number1,Number2を引数number1,number2で初期化）
	TempClass(Type number1, Type2 number2) :
		Number1(number1), Number2(number2) {
	}

	Type Min()
	{
		if (Number1 < Number2)
		{
			return static_cast<Type>(Number1);
		}
		else {
			return static_cast<Type2>(Number2);
		}
	};
private:
	Type Number1;
	Type Number2;

};


