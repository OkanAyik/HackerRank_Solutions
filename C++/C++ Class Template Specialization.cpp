// Define specializations for the Traits class template here.
template<typename T>
struct Traits {
    Traits() = default;

    static string name(int val)
    {
        if (is_same<T, Color>::value) {
            switch (val) {
            case 0:
                return string{ "red" };
            case 1:
                return string{ "green" };
            case 2:
                return string{ "orange" };
            default:
                return string{ "unknown" };
            }
        }
        else if(is_same<T, Fruit>::value){
            switch (val) {
            case 0:
                return string{"apple"};
            case 1:
                return string{"orange"};
            case 2:
                return string{"pear"};
            default:
                return string{"unknown"};
            }
        }
        else {
            return string{ "unknown" };
        }
    }

};
