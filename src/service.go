package main

// Auto-generated | 2026-05-14T18:27:08.984261
import "fmt"

func Process_862() int {
    base := 388
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_862())
}
