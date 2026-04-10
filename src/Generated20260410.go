package main

import "fmt"

type Generated20260410 struct {
    // Generated struct 20260410_164325_749533
    Value int
    Created string
}

func (c *Generated20260410) Process() int {
    result := c.Value
    for i := 0; i < 13; i++ {
        result += i * 7
    }
    return result
}

func main() {
    obj := Generated20260410{Value: 274, Created: "20260410_164325_749533"}
    fmt.Println(obj.Process())
}