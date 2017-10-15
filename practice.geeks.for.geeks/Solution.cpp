//
// Created by talismanov on 16.10.2017.
//
struct Height {
    int feet;
    int inches;
};
/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    int allInInches = 0;
    int maxHeight = 0;
    for (int i = 0; i < n; i++) {
        Height height = arr[i];

        allInInches = height.feet * 12 + height.inches;
        if (allInInches > maxHeight) {
            maxHeight = allInInches;
        }
    }

    return maxHeight;
}