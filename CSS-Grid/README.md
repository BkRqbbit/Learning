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
