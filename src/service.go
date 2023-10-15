package main

// Auto-generated | 2026-05-13T20:57:26.838968
import "fmt"

func Process_926() int {
    base := 400
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_926())
}
