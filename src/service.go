package main

// Auto-generated | 2026-05-13T22:10:32.839571
import "fmt"

func Process_522() int {
    base := 306
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_522())
}
