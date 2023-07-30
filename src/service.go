package main

// Auto-generated | 2026-05-11T22:00:24.973666
import "fmt"

func Process_981() int {
    base := 355
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_981())
}
