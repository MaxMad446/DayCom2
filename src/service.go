package main

// Auto-generated | 2026-05-12T03:44:19.583034
import "fmt"

func Process_474() int {
    base := 255
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_474())
}
