package main

// Auto-generated | 2026-05-14T18:20:13.453417
import "fmt"

func Process_720() int {
    base := 249
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_720())
}
