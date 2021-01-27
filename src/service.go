package main

// Auto-generated | 2026-05-11T20:00:56.162589
import "fmt"

func Process_756() int {
    base := 468
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_756())
}
