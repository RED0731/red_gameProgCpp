# Game Programming in C++ Errata
Here are the known errors in the text of the book. If you notice any further errors,
please create an issue on this GitHub repository.

* Chapter 3
  - Page 67: The return type of Actor::GetForward should be Vector2 (found by Takashi Imagire)
  - Page 70: When discussing the properties of the dot product, the text incorrectly states
    that the dot product is associative. It is not associative since the first dot
	 product results in a scalar, and thus it is impossible to perform a second dot product. However,
	 scalar multiplication is assocaitive over the dot product, since s (a dot b) = (s a) dot b.
	 (found by Takashi Imagire)
* Chapter 4
  - Page 101: The last sentence should read "In this case, if you access outMap and the node requested
    isn’t in the map, you initialize that node’s parent to the current node." (found by Takashi Imagire)
  - Page 107: Where it talks about the GBFS open set, the vector defined for the open set should be called
    openSet, not closedSet (found by Takashi Imagire)
* Chapter 6
  - Page 199: The reference to "horizontal" field of view should say "vertical" field of view, since it
    affects the y-component (found by Takashi Imagire)
* Chapter 13
  - Page 396: In the equations for bilinear interpolation, the vFactor component should access the .v
    components of P, A, and C, not the .u components (found by Takashi Imagire)