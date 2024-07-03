# CSS Grid
Grid is a value of the CSS `display` property.\
It allow us to use a grid to customize the layout of our website.

## Grid container
A grid container is a html element that contains other elements.\
We can create a grid container by using the `grid` or `inline-grid` value to the `display` property.\
`.grid-container{ display: grid; }`

The main difference between the `grid` and `inline-grid` is that:\
The `grid` element makes the grid container cover the full width.\
While the `inline-grid` only uses the space of the content inside of it.

Once you create a grid container, you will have a grid of 1 row, and 1 column.\
That's the reason why you may  not see immediate changes on your web.\
Once the c 

Any element inside of a grid container, becomes automatically a grid item.
You must know that once you create a grid container, all the elements inside (grid items) will stop behave like a normal block or inline html element.

A grid container is used to establish a grid format that we can specify for the design of our web.\
Which means we can specify the number of columns and rows we want to use!\
Also, the dimensions of each one of them, depending on the layout we want to achieve.

## grid-template-columns
Define the number of columns of a grid, and its sizes.

You must use the property `grid-template-columns` followed by the size of each column\
`grid-template-columns: 200px 200px;`\
If there are more elements than columns, they will be grouped down, creating another row.

When we use the `grid-template-columns` we must specify the size of each column.\
You must know that you can use fixed values, and percentage values.\
By using percentage values, the size of the container is taked as a reference.\
We can use the following to create two columns, at 50% size each.\
`grid-template-columns: 50% 50%;`

## grid
The `grid` property allows us to define the columns and rows of a grid in the same css rule.\
You must first specify the rows, and then the columns.\
They are separated by a diagonal character.\
`grid: 100px 100px / 50px 50px;`

That rule will create a grid with two columns and two rows.

## auto (track size)
The `auto` value is used to define the size of columns and rows.\
This way, you can define how your grid will be shown.

By using it, you can create grid items of the same size.\
Depending on the size of the container.\
It will take all the space available, and will divide it between the items inside the grid.

The `auto` value is useful when we have multiple items.\
So instead of using percentages and calculating the value of each element, we can use the `auto` value instead and it will bring the same result.

You can use the `auto` value with other fixed values.\
It will allow you to adjust the grid as you want.\
Ex: The grid will have two rows, one of 200px width, and the other will cover the rest by using the `auto` value.
```css
.container{
    display: grid;
    grid-template-columns: 200px auto;
}
```

You must keep in mind, that when the content width of one item is larger than the rest, the grid may shrinks to adjust it.\
The item will use as many space it needs just to show the content.\
If the space is more than enough, all the items will be of the same size.

## fr (track size)
If we want to create a grid with all the items having the same size, it is not possible to do by using the `auto` value, and using percentages might be a bit hard.\
That's why, you can use the `fr` value, which means fraction.

What it does, is to divide the grid area into equal parts.\
So if you create two columsn using the `fr` value, you will get two columns of the same size, no matter the size of the content inside (as happens with the `auto` value).

To use this, you may use the following strucutre:
```css
.container{
    display: grid;
    grid-template-columns: 1fr 1fr;
}
```

Consider that it is not enough to use the `fr` keyword.\
It will be marked as a syntax error.\
You must specify how many fractions you would like to use.\
And the grid will divide into the total number of fractions used.

For example, the following code creates 3 fractions.\
Which means you will get 3 columns of the same size.
```css
.container{
    display: grid;
    grid-template-columns: 1fr 1fr 1fr;
}
```

## minmax()
This function is used to define the minimum and maximum size of a grid track.\
So when we try to make our layout responsive, it won't get over those limits, that can at certain point, ruin the whole web appearance.

## max-content
This feature is used to control the size of a grid track, based on the content inside of it.\
It is a value that can be used for the `grid-template-columns` propertie.

For the `max-content` value, will make the text to no wrap.\
All the text will be in a single line, and the container size will be adjusted to fit all the content inside.

When you do combine both using the `minmax()` function, it will keep in between the minimum and maximum size.\
Wrapping the content to follow the size of the grid.

## min-content
The value `min-content` will wrap the text to make the container as small as possible.

## fit-content
There will be times were we want a grid container to grow at a specific limit.\
After the limit has been reached, the content inside will be wrapped.

That's the purpose of the `fit-content()` function.\
It takes as a parameter the maximum size the container will have.