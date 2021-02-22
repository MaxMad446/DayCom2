package main

// Auto-generated | 2026-05-12T20:39:22.766677
import "fmt"

func Process_343() int {
    base := 17
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_343())
}
