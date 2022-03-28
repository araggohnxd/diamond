# diamond

Print a diamond of the the given width. Written in C.<br>
Inspired by a Reddit post. lol

# Usage
Simply clone it in your local machine:
```sh
git clone https://github.com/araggohnxd/diamond.git
```

Jump into the created directory and use `make` to compile it.

You can also simply type `make run` to compile and execute it.

Now you'll be presented with this message:
```sh
$> Insert diamond width:
$>
```
Insert the desired width and see the result.
```sh
$> 9
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
$>
```
<br>

# Makefile
`make` includes all the following targets:<br><br>
`all` for compiling it.<br>
`run` for compiling and executing it.<br>
`clean` for removing all objects.<br>
`fclean` for removing all objects and the program binary.<br>
`re` for the effects of `fclean` followed by `all`.

#### PS.: This little project has nothing to do with 42. I followed the Norm simply because im too used to it now.
