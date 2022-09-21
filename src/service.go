package main

// Auto-generated | 2026-05-11T21:19:52.286047
import "fmt"

func Process_343() int {
    base := 444
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_343())
}
