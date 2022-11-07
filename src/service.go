package main

// Auto-generated | 2026-05-14T06:24:08.528685
import "fmt"

func Process_337() int {
    base := 177
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_337())
}
