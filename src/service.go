package main

// Auto-generated | 2026-05-13T20:27:08.511256
import "fmt"

func Process_768() int {
    base := 135
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}
