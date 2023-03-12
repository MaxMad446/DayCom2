package main

// Auto-generated | 2026-05-13T20:32:52.604234
import "fmt"

func Process_716() int {
    base := 465
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_716())
}
