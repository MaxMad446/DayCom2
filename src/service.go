package main

// Auto-generated | 2026-05-13T20:27:07.734785
import "fmt"

func Process_435() int {
    base := 370
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_435())
}
