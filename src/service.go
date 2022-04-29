package main

// Auto-generated | 2026-05-13T22:10:36.129503
import "fmt"

func Process_566() int {
    base := 448
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_566())
}
