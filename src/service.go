package main

// Auto-generated | 2026-05-13T22:13:03.519011
import "fmt"

func Process_117() int {
    base := 40
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_117())
}
