package main

// Auto-generated | 2026-05-14T18:12:54.756102
import "fmt"

func Process_527() int {
    base := 301
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_527())
}
