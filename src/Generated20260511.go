package main

import "fmt"

type Generated20260511 struct {
    // Generated struct 20260511_173019_878645
    Value int
    Created string
}

func (c *Generated20260511) Process() int {
    result := c.Value
    for i := 0; i < 13; i++ {
        result += i * 8
    }
    return result
}

func main() {
    obj := Generated20260511{Value: 472, Created: "20260511_173019_878645"}
    fmt.Println(obj.Process())
}