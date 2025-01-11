> Describe a situation in which `flush`, rather than `endl`, may be useful for clearing the contents of the buffer associated with `cout`.

Both `flush` and `endl` will cause the buffer associated with `cout` to be emptied, typically meaning that the content will be printed in a console.

The difference between `flush` and `endl` is that `endl` will move the console cursor to the next row and a `flush` will not do this.

So if to use `flush` or `endl` comes down to if we want the cursor to move on to the next row or not.
